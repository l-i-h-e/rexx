
#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

#include <proto/cpp/chain.pb.h>
#include <proto/cpp/consensus.pb.h>
#include <utils/entry_cache.h>
#include <utils/atom_map.h>
#include <main/configure.h>
#include <json/value.h>
#include "account.h"

namespace rexx {
	class Environment : public AtomMap<std::string, AccountFrm>{
	public:
		typedef AtomMap<std::string, Json::Value>::mapKV settingKV;
		const std::string validatorsKey = "validators";
		const std::string feesKey = "configFees";

		AtomMap<std::string, Json::Value> settings_;
		std::map<std::string, AccountFrm::pointer> entries_;

		Environment *parent_;
		bool useAtomMap_;

		Environment() = default;
		Environment(Environment const&) = delete;
		Environment& operator=(Environment const&) = delete;

		Environment(Environment *parent);
		Environment(mapKV* data, settingKV* settings);

		bool GetEntry(const std::string& key, AccountFrm::pointer &frm);
		bool AddEntry(const std::string& key, AccountFrm::pointer frm);

		bool UpdateFeeConfig(const Json::Value &fee_config);
		bool GetVotedFee(const protocol::FeeConfig &old_fee, protocol::FeeConfig& new_fee);

		Json::Value& GetValidators();
		bool UpdateNewValidators(const Json::Value& validators);
		bool GetVotedValidators(const protocol::ValidatorSet &old_validator, protocol::ValidatorSet& new_validator);

		bool Commit();
		void ClearChangeBuf();

		virtual bool GetFromDB(const std::string &address, AccountFrm::pointer &account_ptr);
		static bool AccountFromDB(const std::string &address, AccountFrm::pointer &account_ptr);
		std::shared_ptr<Environment> NewStackFrameEnv();
	};
}
#endif
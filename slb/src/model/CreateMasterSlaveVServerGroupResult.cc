/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/slb/model/CreateMasterSlaveVServerGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateMasterSlaveVServerGroupResult::CreateMasterSlaveVServerGroupResult() :
	ServiceResult()
{}

CreateMasterSlaveVServerGroupResult::CreateMasterSlaveVServerGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMasterSlaveVServerGroupResult::~CreateMasterSlaveVServerGroupResult()
{}

void CreateMasterSlaveVServerGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMasterSlaveBackendServers = value["MasterSlaveBackendServers"]["MasterSlaveBackendServer"];
	for (auto value : allMasterSlaveBackendServers)
	{
		MasterSlaveBackendServer masterSlaveBackendServersObject;
		if(!value["ServerId"].isNull())
			masterSlaveBackendServersObject.serverId = value["ServerId"].asString();
		if(!value["Port"].isNull())
			masterSlaveBackendServersObject.port = std::stoi(value["Port"].asString());
		if(!value["Weight"].isNull())
			masterSlaveBackendServersObject.weight = std::stoi(value["Weight"].asString());
		if(!value["IsBackup"].isNull())
			masterSlaveBackendServersObject.isBackup = std::stoi(value["IsBackup"].asString());
		masterSlaveBackendServers_.push_back(masterSlaveBackendServersObject);
	}
	if(!value["MasterSlaveVServerGroupId"].isNull())
		masterSlaveVServerGroupId_ = value["MasterSlaveVServerGroupId"].asString();

}

std::string CreateMasterSlaveVServerGroupResult::getMasterSlaveVServerGroupId()const
{
	return masterSlaveVServerGroupId_;
}

std::vector<CreateMasterSlaveVServerGroupResult::MasterSlaveBackendServer> CreateMasterSlaveVServerGroupResult::getMasterSlaveBackendServers()const
{
	return masterSlaveBackendServers_;
}


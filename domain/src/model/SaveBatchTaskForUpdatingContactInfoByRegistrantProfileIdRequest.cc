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

#include <alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest;

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId")
{}

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest()
{}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getContactType()const
{
	return contactType_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setParameter("ContactType", contactType);
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

long SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setParameter("RegistrantProfileId", std::to_string(registrantProfileId));
}

std::vector<std::string> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

bool SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getTransferOutProhibited()const
{
	return transferOutProhibited_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setTransferOutProhibited(bool transferOutProhibited)
{
	transferOutProhibited_ = transferOutProhibited;
	setParameter("TransferOutProhibited", std::to_string(transferOutProhibited));
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}


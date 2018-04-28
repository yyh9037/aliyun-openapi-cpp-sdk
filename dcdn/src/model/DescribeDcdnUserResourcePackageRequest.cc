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

#include <alibabacloud/dcdn/model/DescribeDcdnUserResourcePackageRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserResourcePackageRequest;

DescribeDcdnUserResourcePackageRequest::DescribeDcdnUserResourcePackageRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserResourcePackage")
{}

DescribeDcdnUserResourcePackageRequest::~DescribeDcdnUserResourcePackageRequest()
{}

std::string DescribeDcdnUserResourcePackageRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnUserResourcePackageRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long DescribeDcdnUserResourcePackageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnUserResourcePackageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnUserResourcePackageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDcdnUserResourcePackageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


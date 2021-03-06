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

#include <alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRedeemRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForCreatingOrderRedeemRequest;

SaveBatchTaskForCreatingOrderRedeemRequest::SaveBatchTaskForCreatingOrderRedeemRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForCreatingOrderRedeem")
{}

SaveBatchTaskForCreatingOrderRedeemRequest::~SaveBatchTaskForCreatingOrderRedeemRequest()
{}

std::vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam> SaveBatchTaskForCreatingOrderRedeemRequest::getOrderRedeemParam()const
{
	return orderRedeemParam_;
}

void SaveBatchTaskForCreatingOrderRedeemRequest::setOrderRedeemParam(const std::vector<OrderRedeemParam>& orderRedeemParam)
{
	orderRedeemParam_ = orderRedeemParam;
	int i = 0;
	for(int i = 0; i!= orderRedeemParam.size(); i++)	{
		auto obj = orderRedeemParam.at(i);
		std::string str ="OrderRedeemParam."+ std::to_string(i);
		setParameter(str + ".DomainName", obj.domainName);
		setParameter(str + ".CurrentExpirationDate", std::to_string(obj.currentExpirationDate));
	}
}

std::string SaveBatchTaskForCreatingOrderRedeemRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForCreatingOrderRedeemRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForCreatingOrderRedeemRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForCreatingOrderRedeemRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}


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

#include <alibabacloud/rds/model/DescribeResourceDiagnosisRequest.h>

using AlibabaCloud::Rds::Model::DescribeResourceDiagnosisRequest;

DescribeResourceDiagnosisRequest::DescribeResourceDiagnosisRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeResourceDiagnosis")
{}

DescribeResourceDiagnosisRequest::~DescribeResourceDiagnosisRequest()
{}

std::string DescribeResourceDiagnosisRequest::getEndTime()const
{
	return endTime_;
}

void DescribeResourceDiagnosisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeResourceDiagnosisRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeResourceDiagnosisRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeResourceDiagnosisRequest::getStartTime()const
{
	return startTime_;
}

void DescribeResourceDiagnosisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeResourceDiagnosisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeResourceDiagnosisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}


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

#include <alibabacloud/ecs/model/ModifyDiskAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskAttributeRequest;

ModifyDiskAttributeRequest::ModifyDiskAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskAttribute")
{}

ModifyDiskAttributeRequest::~ModifyDiskAttributeRequest()
{}

std::string ModifyDiskAttributeRequest::getDiskName()const
{
	return diskName_;
}

void ModifyDiskAttributeRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

bool ModifyDiskAttributeRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void ModifyDiskAttributeRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", std::to_string(deleteAutoSnapshot));
}

long ModifyDiskAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDiskAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyDiskAttributeRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void ModifyDiskAttributeRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setParameter("EnableAutoSnapshot", std::to_string(enableAutoSnapshot));
}

std::string ModifyDiskAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDiskAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDiskAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDiskAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDiskAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyDiskAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyDiskAttributeRequest::getDiskId()const
{
	return diskId_;
}

void ModifyDiskAttributeRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

long ModifyDiskAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDiskAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyDiskAttributeRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void ModifyDiskAttributeRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", std::to_string(deleteWithInstance));
}


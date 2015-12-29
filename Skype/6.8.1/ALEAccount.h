//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALEObjectInterface.h"

@interface ALEAccount : ALEObjectInterface
{
    _Bool ownAccountObj;
    struct AccountWrapper *accountWrapper;
}

- (void)UpdateSubscriptions;
- (void)SetUIVersion:(id)arg1;
- (_Bool)SetStrProperty:(int)arg1 andValue:(id)arg2;
- (void)SetStandby:(_Bool)arg1;
- (_Bool)SetServersideStrProperty:(int)arg1 andValue:(id)arg2;
- (_Bool)SetServersideIntProperty:(int)arg1 andValue:(unsigned int)arg2;
- (_Bool)SetProfileAttachment:(id)arg1 andAttachment:(id)arg2;
- (void)SetPasswordSaved:(_Bool)arg1;
- (_Bool)SetIntProperty:(int)arg1 andValue:(unsigned int)arg2;
- (_Bool)SetBinProperty:(int)arg1 andValue:(id)arg2;
- (void)SetAvailability:(int)arg1;
- (void)Register:(id)arg1 andSavepwd:(_Bool)arg2 andSavedatalocally:(_Bool)arg3 andEmail:(id)arg4 andAllowspam:(_Bool)arg5;
- (void)ReconnectXMPP;
- (void)Logout:(_Bool)arg1;
- (void)LogoutOtherEndpoints;
- (void)LogoutOtherEndpoint:(id)arg1;
- (void)LogoutEx:(_Bool)arg1 andLocalonly:(_Bool)arg2;
- (void)LoginWithPassword:(id)arg1 andSavepwd:(_Bool)arg2 andSavedatalocally:(_Bool)arg3;
- (void)LoginWithOAuth:(unsigned long long)arg1 andAccesstoken:(id)arg2 andRefreshtoken:(id)arg3 andSavepwd:(_Bool)arg4 andSavedatalocally:(_Bool)arg5;
- (void)Login:(int)arg1;
- (id)GetVerifiedEmail;
- (id)GetVerifiedCompany;
- (id)GetSubscriptionsByType:(id)arg1;
- (void)GetSubscriptionInfo:(id *)arg1 andEndtime:(id *)arg2 andStatus:(id *)arg3 andPackage_type:(id *)arg4 andService_type:(id *)arg5;
- (int)GetStatusWithProgress:(unsigned int *)arg1;
- (id)GetSkypenameHash;
- (id)GetPartnerUID:(int)arg1;
- (id)GetPartnerChannelStatus;
- (void)GetOwnEndpointsInfo:(id *)arg1 andName:(id *)arg2 andType:(id *)arg3;
- (int)GetLastPartnerId;
- (id)GetDBPath;
- (unsigned int)GetContactObjectID;
- (int)GetCapabilityStatus:(int)arg1 andExpirytimestamp:(unsigned int *)arg2;
- (id)GetAllSubscriptionTypes;
- (void)FinishLogin;
- (void)ExternalLoginResponse:(id)arg1;
- (void)Delete;
- (void)ChangePassword:(id)arg1 andNewpassword:(id)arg2 andSavepwd:(_Bool)arg3;
- (void)CancelServerCommit;
- (void)BeginLogin:(int)arg1;
- (void *)skylibObj;
- (void)dealloc;
- (void)createSkylibObject;
- (id)initWithoutSkylibObject;
- (id)init;

@end


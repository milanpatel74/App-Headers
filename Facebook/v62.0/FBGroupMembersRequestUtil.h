/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGroupMembersRequestUtil : NSObject
+(void)alertFailureWithFailedMembers:(id)arg1 selectedMembers:(id)arg2 groupID:(id)arg3 groupName:(id)arg4 tryAgainBlock:(/*^block*/id)arg5 ;
+(void)queryNonMembersFromAddedMembers:(id)arg1 groupID:(id)arg2 completion:(/*^block*/id)arg3 session:(id)arg4 ;
+(void)alertSuccessWithSelectedMembers:(id)arg1 selectedEmails:(id)arg2 group:(id)arg3 inView:(id)arg4 added:(unsigned long long)arg5 invited:(unsigned long long)arg6 alreadyInvited:(unsigned long long)arg7 alreadyAdded:(unsigned long long)arg8 ;
+(void)addMembers:(id)arg1 andEmails:(id)arg2 toGroup:(id)arg3 completion:(/*^block*/id)arg4 session:(id)arg5 ;
+(id)membersPickerConfigurationWithInitialSelection:(id)arg1 groupID:(id)arg2 session:(id)arg3 ;
+(void)_alertSuccessForAdminApprovedGroupsWithSelectedMembers:(id)arg1 selectedEmails:(id)arg2 group:(id)arg3 inView:(id)arg4 ;
+(id)getAlertMessageFromAdded:(unsigned long long)arg1 invited:(unsigned long long)arg2 alreadyInvited:(unsigned long long)arg3 alreadyAdded:(unsigned long long)arg4 memberRequest:(unsigned long long)arg5 ;
+(void)_removeMember:(id)arg1 fromMembers:(id)arg2 ;
+(void)alertSuccessWithSelectedMembers:(id)arg1 selectedEmails:(id)arg2 group:(id)arg3 inView:(id)arg4 ;
@end

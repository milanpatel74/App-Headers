/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadMarkRunnerAction, FBMSyncedThreadKey, MNThreadSimpleGraphRunnerAction, MNThreadCustomizationRunnerAction, MNSecureThreadSummaryUpdate, MNThreadGraphQLMutationRunnerAction;

@interface MNThreadSummaryRunnableClientUpdate : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNThreadMarkRunnerAction* _mark_action;
	FBMSyncedThreadKey* _mark_threadKey;
	MNThreadSimpleGraphRunnerAction* _graphRunnerAction;
	MNThreadCustomizationRunnerAction* _customization_action;
	FBMSyncedThreadKey* _customization_threadKey;
	MNSecureThreadSummaryUpdate* _secureThreadUpdate;
	MNThreadGraphQLMutationRunnerAction* _graphQLMutationRunnerAction;

}
+(id)customizationWithAction:(id)arg1 threadKey:(id)arg2 ;
+(id)graphQLMutationRunnerAction:(id)arg1 ;
+(id)graphRunnerAction:(id)arg1 ;
+(id)markWithAction:(id)arg1 threadKey:(id)arg2 ;
+(id)secureThreadUpdate:(id)arg1 ;
-(void)matchMark:(/*^block*/id)arg1 graphRunnerAction:(/*^block*/id)arg2 customization:(/*^block*/id)arg3 secureThreadUpdate:(/*^block*/id)arg4 graphQLMutationRunnerAction:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

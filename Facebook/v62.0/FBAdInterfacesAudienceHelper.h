/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdInterfacesAudienceHelper : NSObject
+(id)unifiedAudiencesRequestForPromoteCTAWithAccountID:(id)arg1 promotableObjectID:(id)arg2 audiencesAfterCursor:(id)arg3 audiencesCount:(id)arg4 ;
+(id)parseUnifiedAudiencesFromDefaultSpec:(id)arg1 ;
+(id)initialUnifiedAudiencesFetchCount;
+(id)unifiedAudiencesRequestWithAccountID:(id)arg1 promotableObjectID:(id)arg2 audiencesAfterCursor:(id)arg3 audiencesCount:(id)arg4 ;
+(id)unifiedAudiencesRequestForPromoteWebsiteWithAccountID:(id)arg1 promotableObjectID:(id)arg2 audiencesAfterCursor:(id)arg3 audiencesCount:(id)arg4 ;
+(id)unifiedAudiencesRequestForPromotePageWithAccountID:(id)arg1 promotableObjectID:(id)arg2 audiencesAfterCursor:(id)arg3 audiencesCount:(id)arg4 ;
+(id)_unifiedAudiencesRequestWithGraphQLQuery:(id)arg1 ;
+(id)unifiedAudiencesFetchCount;
+(id)locationTargetingComponentConfigurationsWithAudienceOption:(id)arg1 targetingSpec:(id)arg2 account:(id)arg3 boostedComponentApp:(id)arg4 ;
@end

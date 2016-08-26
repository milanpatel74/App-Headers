/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStreamAnalytics, FBGraphQLConnectionInsertionLocation;

@interface FBStreamResponseHandlerBuilderParameters : FBValueObject <NSCopying> {

	NSString* _graphQLRequestTargetID;
	FBStreamAnalytics* _streamAnalytics;
	unsigned long long _loadType;
	FBGraphQLConnectionInsertionLocation* _insertionLocation;

}

@property (nonatomic,copy,readonly) NSString * graphQLRequestTargetID;                                     //@synthesize graphQLRequestTargetID=_graphQLRequestTargetID - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalytics * streamAnalytics;                                   //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
@property (nonatomic,readonly) unsigned long long loadType;                                                //@synthesize loadType=_loadType - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionInsertionLocation * insertionLocation;              //@synthesize insertionLocation=_insertionLocation - In the implementation block
-(NSString *)graphQLRequestTargetID;
-(FBStreamAnalytics *)streamAnalytics;
-(FBGraphQLConnectionInsertionLocation *)insertionLocation;
-(id)initWithGraphQLRequestTargetID:(id)arg1 streamAnalytics:(id)arg2 loadType:(unsigned long long)arg3 insertionLocation:(id)arg4 ;
-(unsigned long long)loadType;
@end

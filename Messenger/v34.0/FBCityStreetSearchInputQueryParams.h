/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBCityStreetSearchInputQueryParamsViewerCoordinates;

@interface FBCityStreetSearchInputQueryParams : FBGraphQLInput {

	NSString* _query;
	FBCityStreetSearchInputQueryParamsViewerCoordinates* _viewerCoordinates;

}

@property (nonatomic,copy) NSString * query;                                                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) FBCityStreetSearchInputQueryParamsViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBCityStreetSearchInputQueryParamsViewerCoordinates *)viewerCoordinates;
-(void)setViewerCoordinates:(FBCityStreetSearchInputQueryParamsViewerCoordinates *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
@end

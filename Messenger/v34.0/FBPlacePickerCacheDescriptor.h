/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCacheDescriptor.h>
#import <Messenger/FBGraphObjectPagingLoaderDelegate.h>

@class NSString, NSSet, FBGraphObjectPagingLoader;

@interface FBPlacePickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	BOOL _hasCompletedFetch;
	long long _radiusInMeters;
	long long _resultsLimit;
	NSString* _searchText;
	NSSet* _fieldsForRequest;
	FBGraphObjectPagingLoader* _loader;
	CGPoint _locationCoordinate;

}

@property (assign,nonatomic) CGPoint locationCoordinate;                      //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) long long radiusInMeters;                        //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                             //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSSet * fieldsForRequest;                          //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                          //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(BOOL)hasCompletedFetch;
-(NSSet *)fieldsForRequest;
-(void)setRadiusInMeters:(long long)arg1 ;
-(long long)radiusInMeters;
-(id)initWithLocationCoordinate:(CGPoint)arg1 radiusInMeters:(long long)arg2 searchText:(id)arg3 resultsLimit:(long long)arg4 fieldsForRequest:(id)arg5 ;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)searchText;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(void)setResultsLimit:(long long)arg1 ;
-(long long)resultsLimit;
-(void)setLocationCoordinate:(CGPoint)arg1 ;
-(FBGraphObjectPagingLoader *)loader;
-(CGPoint)locationCoordinate;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/FBCacheDescriptor.h>
#import <BubbleMania/FBGraphObjectPagingLoaderDelegate.h>

@class NSSet, NSString, FBGraphObjectPagingLoader;

@interface FBFriendPickerCacheDescriptor : FBCacheDescriptor <FBGraphObjectPagingLoaderDelegate> {

	BOOL _hasCompletedFetch;
	BOOL _usePageLimitOfOne;
	NSSet* _fieldsForRequest;
	NSString* _userID;
	FBGraphObjectPagingLoader* _loader;

}

@property (nonatomic,copy) NSSet * fieldsForRequest;                          //@synthesize fieldsForRequest=_fieldsForRequest - In the implementation block
@property (nonatomic,copy) NSString * userID;                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) FBGraphObjectPagingLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                          //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
@property (assign,nonatomic) BOOL usePageLimitOfOne;                          //@synthesize usePageLimitOfOne=_usePageLimitOfOne - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)pagingLoaderDidFinishLoading:(id)arg1 ;
-(NSSet *)fieldsForRequest;
-(void)setFieldsForRequest:(NSSet *)arg1 ;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(BOOL)hasCompletedFetch;
-(id)initWithUserID:(id)arg1 fieldsForRequest:(id)arg2 ;
-(void)setUsePageLimitOfOne:(BOOL)arg1 ;
-(BOOL)usePageLimitOfOne;
-(id)initWithUserID:(id)arg1 ;
-(id)initWithFieldsForRequest:(id)arg1 ;
-(void)setUsePageLimitOfOne;
-(void)dealloc;
-(id)init;
-(void)setLoader:(FBGraphObjectPagingLoader *)arg1 ;
-(FBGraphObjectPagingLoader *)loader;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

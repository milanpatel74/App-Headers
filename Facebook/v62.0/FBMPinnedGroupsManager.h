/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBMAppProperties;
@class NSArray, NSString;

@interface FBMPinnedGroupsManager : NSObject <FBViewerContextClassProvidable> {

	id<FBMAppProperties> _appProperties;
	BOOL _hasFetchedGroups;
	NSArray* _pinnedList;
	long long _lastUpdateTime;

}

@property (nonatomic,copy) NSArray * pinnedList;                    //@synthesize pinnedList=_pinnedList - In the implementation block
@property (assign,nonatomic) long long lastUpdateTime;              //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedGroups;                 //@synthesize hasFetchedGroups=_hasFetchedGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)isPinnedGroupsEnabled;
-(void)setPinnedList:(NSArray *)arg1 ;
-(BOOL)hasFetchedGroups;
-(void)updateList:(id)arg1 withUpdateTime:(long long)arg2 fromFetch:(BOOL)arg3 ;
-(NSArray *)pinnedList;
-(void)setHasFetchedGroups:(BOOL)arg1 ;
-(void)setEmptyList;
-(void)optimisticallyPinGroupWithInfo:(id)arg1 ;
-(long long)lastUpdateTime;
-(void)clearList;
-(void)setLastUpdateTime:(long long)arg1 ;
@end

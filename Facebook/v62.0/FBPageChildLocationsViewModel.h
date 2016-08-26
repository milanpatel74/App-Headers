/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBPageChildLocationsViewModel : FBValueObject <NSCopying> {

	BOOL _enableMapView;
	BOOL _enableShowMoreCell;
	NSString* _pageFBID;
	unsigned long long _totalChildPagesCount;
	NSArray* _childPagesInfo;
	NSArray* _mapViewLocations;

}

@property (nonatomic,copy,readonly) NSString * pageFBID;                             //@synthesize pageFBID=_pageFBID - In the implementation block
@property (nonatomic,readonly) unsigned long long totalChildPagesCount;              //@synthesize totalChildPagesCount=_totalChildPagesCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childPagesInfo;                        //@synthesize childPagesInfo=_childPagesInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mapViewLocations;                      //@synthesize mapViewLocations=_mapViewLocations - In the implementation block
@property (nonatomic,readonly) BOOL enableMapView;                                   //@synthesize enableMapView=_enableMapView - In the implementation block
@property (nonatomic,readonly) BOOL enableShowMoreCell;                              //@synthesize enableShowMoreCell=_enableShowMoreCell - In the implementation block
-(id)initWithPageFBID:(id)arg1 totalChildPagesCount:(unsigned long long)arg2 childPagesInfo:(id)arg3 mapViewLocations:(id)arg4 enableMapView:(BOOL)arg5 enableShowMoreCell:(BOOL)arg6 ;
-(unsigned long long)totalChildPagesCount;
-(NSArray *)childPagesInfo;
-(NSArray *)mapViewLocations;
-(BOOL)enableMapView;
-(BOOL)enableShowMoreCell;
-(NSString *)pageFBID;
@end

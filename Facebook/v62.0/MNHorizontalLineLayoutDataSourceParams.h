/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface MNHorizontalLineLayoutDataSourceParams : FBValueObject <NSCopying> {

	double _itemsSpacing;
	long long _totalItemsCount;
	NSArray* _sectionsInfo;
	double _defaultItemsRatio;
	NSDictionary* _itemsRatios;

}

@property (nonatomic,readonly) double itemsSpacing;                          //@synthesize itemsSpacing=_itemsSpacing - In the implementation block
@property (nonatomic,readonly) long long totalItemsCount;                    //@synthesize totalItemsCount=_totalItemsCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionsInfo;                  //@synthesize sectionsInfo=_sectionsInfo - In the implementation block
@property (nonatomic,readonly) double defaultItemsRatio;                     //@synthesize defaultItemsRatio=_defaultItemsRatio - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemsRatios;              //@synthesize itemsRatios=_itemsRatios - In the implementation block
-(long long)totalItemsCount;
-(double)itemsSpacing;
-(id)initWithItemsSpacing:(double)arg1 totalItemsCount:(long long)arg2 sectionsInfo:(id)arg3 defaultItemsRatio:(double)arg4 itemsRatios:(id)arg5 ;
-(NSDictionary *)itemsRatios;
-(double)defaultItemsRatio;
-(NSArray *)sectionsInfo;
@end

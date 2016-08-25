/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBNativeAdTableViewAdProvider.h>

@class FBNativeAdViewAttributes, NSString;

@interface FBNativeAdTableViewCellProvider : FBNativeAdTableViewAdProvider {

	long long _type;
	FBNativeAdViewAttributes* _attributes;
	NSString* _uniqueTableCellIdentifier;

}

@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) FBNativeAdViewAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * uniqueTableCellIdentifier;               //@synthesize uniqueTableCellIdentifier=_uniqueTableCellIdentifier - In the implementation block
-(id)initWithManager:(id)arg1 forType:(long long)arg2 forAttributes:(id)arg3 ;
-(NSString *)uniqueTableCellIdentifier;
-(void)setUniqueTableCellIdentifier:(NSString *)arg1 ;
-(id)initWithManager:(id)arg1 forType:(long long)arg2 ;
-(id)tableCellIdentifier;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(FBNativeAdViewAttributes *)attributes;
-(void)setAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(id)initWithManager:(id)arg1 ;
@end

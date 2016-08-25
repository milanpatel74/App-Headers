/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/SimpleListPicker.h>

@class ListingItemDataManager, NSArray;

@interface SellingReturnsWithinPicker : SimpleListPicker {

	ListingItemDataManager* _dataManager;
	NSArray* _optionValues;

}

@property (nonatomic,retain) NSArray * optionValues;                            //@synthesize optionValues=_optionValues - In the implementation block
@property (nonatomic,retain) ListingItemDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
-(NSArray *)optionValues;
-(void)setDataManager:(ListingItemDataManager *)arg1 ;
-(ListingItemDataManager *)dataManager;
-(void)setOptionValues:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

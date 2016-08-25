/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EBUShippingLabelDataManager, UILabel, UIImageView, UITableView, NSMutableArray, NSString;

@interface EBUShippingLabelVoidReasonView : EBUDynamicHeightView <UITableViewDelegate, UITableViewDataSource> {

	BOOL _expanded;
	EBUShippingLabelDataManager* _dataManager;
	UILabel* _voidReasonTitle;
	UIImageView* _voidReasonImage;
	UITableView* _voidReasonTable;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) EBUShippingLabelDataManager * dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) UILabel * voidReasonTitle;                              //@synthesize voidReasonTitle=_voidReasonTitle - In the implementation block
@property (nonatomic,retain) UIImageView * voidReasonImage;                          //@synthesize voidReasonImage=_voidReasonImage - In the implementation block
@property (nonatomic,retain) UITableView * voidReasonTable;                          //@synthesize voidReasonTable=_voidReasonTable - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;                      //@synthesize localConstraints=_localConstraints - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                          //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)voidReasonTitle;
-(UIImageView *)voidReasonImage;
-(UITableView *)voidReasonTable;
-(void)setVoidReasonTable:(UITableView *)arg1 ;
-(CGAffineTransform)accessoryTranformForExpandedState:(BOOL)arg1 ;
-(void)updateShippingLabel:(id)arg1 expanded:(BOOL)arg2 ;
-(void)scrollToVoidReason;
-(void)setVoidReasonTitle:(UILabel *)arg1 ;
-(void)setVoidReasonImage:(UIImageView *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(void)setDataManager:(EBUShippingLabelDataManager *)arg1 ;
-(EBUShippingLabelDataManager *)dataManager;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)updateConstraints;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
@end

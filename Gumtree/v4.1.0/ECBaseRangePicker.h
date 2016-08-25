/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Gumtree/ECSimpleCompletionProtocol.h>

@class UITableView, ECCellAttributeDataSource, ECRange, NSString;

@interface ECBaseRangePicker : ECBaseViewController <UITableViewDataSource, UITableViewDelegate, ECSimpleCompletionProtocol> {

	BOOL _singleValue;
	BOOL _clearable;
	BOOL _allowOpenEndedRange;
	BOOL _rangeDefaultsToSame;
	UITableView* _tableView;
	ECCellAttributeDataSource* _dataSource;
	ECRange* _range;
	ECRange* _allowedRange;
	NSString* _fromValueTitle;
	NSString* _toValueTitle;
	/*^block*/id _completionHandler;
	long long _selectedValueType;

}

@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) ECCellAttributeDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL singleValue;                                           //@synthesize singleValue=_singleValue - In the implementation block
@property (assign,nonatomic) BOOL clearable;                                             //@synthesize clearable=_clearable - In the implementation block
@property (assign,nonatomic) BOOL allowOpenEndedRange;                                   //@synthesize allowOpenEndedRange=_allowOpenEndedRange - In the implementation block
@property (assign,nonatomic) BOOL rangeDefaultsToSame;                                   //@synthesize rangeDefaultsToSame=_rangeDefaultsToSame - In the implementation block
@property (nonatomic,retain) ECRange * range;                                            //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) ECRange * allowedRange;                                     //@synthesize allowedRange=_allowedRange - In the implementation block
@property (nonatomic,retain) NSString * fromValueTitle;                                  //@synthesize fromValueTitle=_fromValueTitle - In the implementation block
@property (nonatomic,retain) NSString * toValueTitle;                                    //@synthesize toValueTitle=_toValueTitle - In the implementation block
@property (nonatomic,__weak,readonly) NSString * fromValueString; 
@property (nonatomic,__weak,readonly) NSString * toValueString; 
@property (nonatomic,copy) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long selectedValueType;                                //@synthesize selectedValueType=_selectedValueType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateEnable;
-(long long)selectedValueType;
-(ECRange *)allowedRange;
-(void)addPicker:(id)arg1 ;
-(BOOL)rangeDefaultsToSame;
-(NSString *)fromValueString;
-(NSString *)toValueString;
-(void)setupPicker;
-(void)setFromValueTitle:(NSString *)arg1 ;
-(void)setToValueTitle:(NSString *)arg1 ;
-(void)setSingleValue:(BOOL)arg1 ;
-(void)setAllowedRange:(ECRange *)arg1 ;
-(void)setAllowOpenEndedRange:(BOOL)arg1 ;
-(void)setSelectedValueType:(long long)arg1 ;
-(BOOL)allowOpenEndedRange;
-(NSString *)fromValueTitle;
-(NSString *)toValueTitle;
-(void)setRangeDefaultsToSame:(BOOL)arg1 ;
-(void)updatePicker;
-(void)setDataSource:(ECCellAttributeDataSource *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(ECCellAttributeDataSource *)dataSource;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)singleValue;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(ECRange *)range;
-(void)done:(id)arg1 ;
-(void)setRange:(ECRange *)arg1 ;
-(BOOL)clearable;
-(unsigned long long)numberOfValues;
-(void)setClearable:(BOOL)arg1 ;
@end

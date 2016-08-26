/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBEventTimePickerControllerDelegate;
@class UITableViewCell, UISwitch, UITableView, NSDate, UIDatePicker, NSString;

@interface FBEventTimePickerController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _allDay;
	UITableViewCell* _startTimeCell;
	UITableViewCell* _endTimeCell;
	UITableViewCell* _allDayCell;
	UISwitch* _allDaySwitch;
	id<FBEventTimePickerControllerDelegate> _delegate;
	UITableView* _tableView;
	NSDate* _startTime;
	NSDate* _endTime;
	UIDatePicker* _datePicker;

}

@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                                                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                            //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventTimePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_didTapCancel:(id)arg1 ;
-(void)_didTapDone:(id)arg1 ;
-(void)_datePickerValueChanged:(id)arg1 ;
-(void)_showInvalidTimeAlert;
-(void)_setupCells;
-(void)_setDatePickerMaxEndTime;
-(void)_reloadDataForCell:(id)arg1 ;
-(void)_updateCellTextColor;
-(id)initWithStartTime:(id)arg1 endTime:(id)arg2 allDay:(BOOL)arg3 ;
-(void)setDelegate:(id<FBEventTimePickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBEventTimePickerControllerDelegate>)delegate;
-(void)setStartTime:(NSDate *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)_switchValueChanged:(id)arg1 ;
@end

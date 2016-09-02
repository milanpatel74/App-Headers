/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 1, 2016 at 6:29:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/97A55C60-C4F1-459B-870D-76E85F65D812/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKEventEditViewDelegate.h>

@protocol RFMCalendarManagerDelegate;
@class NSOperationQueue, NSArray, EKEventEditViewController, NSString;

@interface RFMCalendarManager : NSObject <EKEventEditViewDelegate> {

	BOOL _eventAccess;
	id<RFMCalendarManagerDelegate> _delegate;
	NSOperationQueue* _calendarQueue;
	NSArray* _dateFormatters;
	EKEventEditViewController* _eventEditViewController;

}

@property (assign,nonatomic,__weak) id<RFMCalendarManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * calendarQueue;                                 //@synthesize calendarQueue=_calendarQueue - In the implementation block
@property (nonatomic,retain) NSArray * dateFormatters;                                         //@synthesize dateFormatters=_dateFormatters - In the implementation block
@property (assign) BOOL eventAccess;                                                           //@synthesize eventAccess=_eventAccess - In the implementation block
@property (nonatomic,retain) EKEventEditViewController * eventEditViewController;              //@synthesize eventEditViewController=_eventEditViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetDelegate;
-(id)dateFormatterWithFormat:(id)arg1 ;
-(NSArray *)dateFormatters;
-(void)eventSaveFailedWithErrorMessage:(id)arg1 ;
-(EKEventEditViewController *)eventEditViewController;
-(void)setEventEditViewController:(EKEventEditViewController *)arg1 ;
-(void)setEventAccess:(BOOL)arg1 ;
-(void)generateCalendarEvent:(id)arg1 ;
-(void)parseAndSaveEventWithInfo:(id)arg1 ;
-(void)presentCalendarEditor;
-(id)calendarViewController;
-(id)getDateFromString:(id)arg1 ;
-(long long)getRecurrenceFrequency:(id)arg1 ;
-(void)dismissCalendarEventController:(id)arg1 ;
-(void)eventSaveFinished;
-(void)setDateFormatters:(NSArray *)arg1 ;
-(BOOL)eventAccess;
-(void)setDelegate:(id<RFMCalendarManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<RFMCalendarManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSOperationQueue *)calendarQueue;
-(void)setCalendarQueue:(NSOperationQueue *)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)addEvent:(id)arg1 ;
@end

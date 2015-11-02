/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol WAAllChatsArchivedViewDelegate;
@class UITableView, UITableViewCell, UITextView, UIView, NSString;

@interface WAAllChatsArchivedView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UITableViewCell* _seeArchivedChatsCell;
	UITextView* _headerTextView;
	UIView* _topBorder;
	id<WAAllChatsArchivedViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAAllChatsArchivedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureHeaderTextViewWithFontSize:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAAllChatsArchivedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<WAAllChatsArchivedViewDelegate>)delegate;
@end


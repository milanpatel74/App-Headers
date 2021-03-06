/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <eBay/EBUAbstractController.h>

@class UIView, NSObject, NSString;

@interface EBUAbstractTableViewController : UITableViewController <EBUAbstractController> {

	NSObject* _model;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSObject * model;                      //@synthesize model=_model - In the implementation block
+(id)controllerWithModel:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSObject *)model;
-(void)setModel:(NSObject *)arg1 ;
-(void)refreshView;
@end


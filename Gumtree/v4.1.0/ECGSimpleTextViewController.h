/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class UITextView, NSString;

@interface ECGSimpleTextViewController : ECBaseViewController {

	UITextView* theTextView;
	NSString* myFileName;

}

@property (nonatomic,retain) UITextView * theTextView; 
@property (nonatomic,retain) NSString * myFileName; 
-(void)setMyFileName:(NSString *)arg1 ;
-(NSString *)myFileName;
-(UITextView *)theTextView;
-(void)setupController:(id)arg1 ;
-(void)setTheTextView:(UITextView *)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end

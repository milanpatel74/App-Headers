/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>

@class UITextView, NSString;

@interface ECGSimpleTextViewController : ECBaseViewController {

	UITextView* _theTextView;
	NSString* _myFileName;

}

@property (nonatomic,retain) UITextView * theTextView;              //@synthesize theTextView=_theTextView - In the implementation block
@property (nonatomic,retain) NSString * myFileName;                 //@synthesize myFileName=_myFileName - In the implementation block
-(void)setMyFileName:(NSString *)arg1 ;
-(NSString *)myFileName;
-(UITextView *)theTextView;
-(void)setupController:(id)arg1 ;
-(void)setTheTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
@end

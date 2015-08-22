/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>

@class PTHTweetbotAccount, NSArray, UIScrollView, PTHStaticSectionView, PTHStaticSectionCell, NSString;

@interface PTHTweetbotServicesSettingsController : PTHViewController {

	PTHTweetbotAccount* _account;
	NSArray* _serviceClasses;
	UIScrollView* _scrollView;
	PTHStaticSectionView* _section;
	PTHStaticSectionCell* _showMarkerCell;
	NSString* _currentServiceKey;
	NSString* _descriptionTitle;
	PTHStaticSectionCell* _selectedCell;

}

@property (nonatomic,retain) NSString * currentServiceKey;                     //@synthesize currentServiceKey=_currentServiceKey - In the implementation block
@property (nonatomic,copy) NSString * descriptionTitle;                        //@synthesize descriptionTitle=_descriptionTitle - In the implementation block
@property (nonatomic,retain) PTHStaticSectionCell * selectedCell;              //@synthesize selectedCell=_selectedCell - In the implementation block
@property (assign,nonatomic,__weak) Class currentServiceClass; 
-(id)initWithAccount:(id)arg1 serviceClasses:(id)arg2 ;
-(void)setCurrentServiceKey:(NSString *)arg1 ;
-(void)setDescriptionTitle:(NSString *)arg1 ;
-(Class)currentServiceClass;
-(void)_selectedCell:(id)arg1 ;
-(void)setSelectedCell:(PTHStaticSectionCell *)arg1 ;
-(void)setCurrentServiceClass:(Class)arg1 ;
-(NSString *)currentServiceKey;
-(NSString *)descriptionTitle;
-(PTHStaticSectionCell *)selectedCell;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

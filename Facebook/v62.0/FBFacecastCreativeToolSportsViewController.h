/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBMediaCreativeTool.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol;
@class NSString, FBMediaCreativeToolbar, UIView, FBUserSession, FBMediaCreativeToolsModel;

@interface FBFacecastCreativeToolSportsViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FBMediaCreativeTool> {

	FBUserSession* _session;
	FBMediaCreativeToolsModel* _model;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	CGSize _outputSize;
	unsigned long long _selectedSportsFilterIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * creativeToolTitle; 
@property (nonatomic,readonly) unsigned long long glyphName; 
@property (nonatomic,readonly) unsigned long long glyphSize; 
@property (nonatomic,readonly) FBMediaCreativeToolbar * creativeToolbar; 
@property (nonatomic,readonly) UIView * creativeToolTrayView; 
@property (nonatomic,readonly) UIView * videoPreviewContentView; 
@property (assign,nonatomic) BOOL translucent; 
+(id)_logName;
-(unsigned long long)glyphSize;
-(void)_applySportsFilterAtIndex:(unsigned long long)arg1 ;
-(NSString *)creativeToolTitle;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(id)initWithSession:(id)arg1 model:(id)arg2 creativeToolsApplier:(id)arg3 logger:(id)arg4 rawVideoSize:(CGSize)arg5 ;
-(UIView *)videoPreviewContentView;
-(unsigned long long)glyphName;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end

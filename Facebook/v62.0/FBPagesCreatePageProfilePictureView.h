/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBPagesCreatePageProfilePictureViewDelegate;
@class FBWebImageDownloaderSessionFactory, FBPagesCreatePageGenericView, FBButton, UILabel, UIView, FBPageCreationPictureUploadHandler;

@interface FBPagesCreatePageProfilePictureView : UIView {

	FBWebImageDownloaderSessionFactory* _factory;
	FBPagesCreatePageGenericView* _genericView;
	FBButton* _nextButton;
	FBButton* _uploadButton;
	UILabel* _footnote;
	UILabel* _pageNameLabel;
	UILabel* _pageSubcategoryLabel;
	UIView* _profilePictureView;
	id<FBPagesCreatePageProfilePictureViewDelegate> _delegate;
	FBPageCreationPictureUploadHandler* _uploadHandler;

}
-(void)_configureNextButton;
-(void)_configureUploadButton;
-(void)_configurePageInfoLabelsWithPageName:(id)arg1 pageSubcategory:(id)arg2 ;
-(void)_configureProfilePictureView;
-(void)_uploadButtonTapped:(id)arg1 ;
-(void)_configureFootnote;
-(void)_nextButtonTapped:(id)arg1 ;
-(id)initWithFactory:(id)arg1 pageName:(id)arg2 pageSubcategory:(id)arg3 delegate:(id)arg4 handler:(id)arg5 ;
-(void)presentProfilePictureWithImage:(id)arg1 ;
-(void)_configureGenericView;
-(void)layoutSubviews;
@end

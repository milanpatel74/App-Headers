/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@protocol FBMLPhotoPendingUploadCellResponder;
@class UIButton;

@interface FBMLPhotoPendingUploadCell : SRFragmentCell {

	UIButton* _button;
	long long _countOfPhotosPendingUpload;
	id<FBMLPhotoPendingUploadCellResponder> _responder;

}

@property (assign,nonatomic) long long countOfPhotosPendingUpload;                                  //@synthesize countOfPhotosPendingUpload=_countOfPhotosPendingUpload - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPhotoPendingUploadCellResponder> responder;              //@synthesize responder=_responder - In the implementation block
-(void)_didTap;
-(void)_configureViewsFromProps;
-(long long)countOfPhotosPendingUpload;
-(void)setCountOfPhotosPendingUpload:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLPhotoPendingUploadCellResponder>)arg1 ;
-(void)prepareForReuse;
-(id<FBMLPhotoPendingUploadCellResponder>)responder;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class ECImage, UIImageView, UIToolbar;

@interface ECPostImageEditorViewController : UIViewController {

	BOOL _imageModified;
	ECImage* _adImage;
	/*^block*/id _completionHandler;
	UIImageView* _imageView;
	UIToolbar* _toolbar;

}

@property (nonatomic,retain) ECImage * adImage;                    //@synthesize adImage=_adImage - In the implementation block
@property (nonatomic,copy) id completionHandler;                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                  //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic) BOOL imageModified;                   //@synthesize imageModified=_imageModified - In the implementation block
-(ECImage *)adImage;
-(void)setAdImage:(ECImage *)arg1 ;
-(void)cropAction:(id)arg1 ;
-(void)rotateAction:(id)arg1 ;
-(void)trashAction:(id)arg1 ;
-(void)doneAction:(id)arg1 ;
-(void)dismissAndSaveChanges:(BOOL)arg1 ;
-(void)setImageModified:(BOOL)arg1 ;
-(BOOL)imageModified;
-(void)cancelAction:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)updateImage;
@end

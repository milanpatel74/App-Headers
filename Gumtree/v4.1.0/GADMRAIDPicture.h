/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol GADMRAIDPictureDelegate;
@class NSURL, NSString;

@interface GADMRAIDPicture : NSObject <NSURLConnectionDataDelegate, UIAlertViewDelegate> {

	BOOL _downloadStarted;
	NSURL* _pictureURL;
	id<GADMRAIDPictureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GADMRAIDPictureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)storeInPhotoAlbum;
-(void)downloadImageWithURL:(id)arg1 ;
-(void)storeImage:(id)arg1 ;
-(void)setDelegate:(id<GADMRAIDPictureDelegate>)arg1 ;
-(id<GADMRAIDPictureDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithURL:(id)arg1 ;
@end

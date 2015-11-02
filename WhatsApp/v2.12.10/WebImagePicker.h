/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <WhatsApp/ImageSearchControllerDelegate.h>
#import <WhatsApp/WAPhotoMoveAndScaleViewControllerDelegate.h>

@protocol WebImagePickerDelegate;
@class ImageSearchController, WAHTTPFetcher, WAPhotoMoveAndScaleViewController, NSString;

@interface WebImagePicker : UINavigationController <ImageSearchControllerDelegate, WAPhotoMoveAndScaleViewControllerDelegate> {

	ImageSearchController* _imageSearchController;
	id<WebImagePickerDelegate> _pickerDelegate;
	WAHTTPFetcher* _httpFetcher;
	WAPhotoMoveAndScaleViewController* _moveAndScaleViewController;

}

@property (nonatomic,retain) NSString * preloadedSearchText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPickerDelegate:(id)arg1 ;
-(void)setPreloadedSearchText:(NSString *)arg1 ;
-(void)imageSearchController:(id)arg1 didSelectImageWithURL:(id)arg2 ;
-(void)imageSearchControllerDidCancel:(id)arg1 ;
-(NSString *)preloadedSearchText;
-(void)downloadImageAtURL:(id)arg1 ;
-(void)photoMoveAndScaleViewController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
@end


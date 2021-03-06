/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMobileCanvasDialog.h>

@protocol FBMobileCanvasDialog;
@class NSString;

@interface FBMobileCanvasDialogWrapper : NSObject <FBMobileCanvasDialog> {

	FBMobileCanvasDialogWrapper* _opener;
	FBMobileCanvasDialogWrapper* _childDialog;
	id<FBMobileCanvasDialog> _decoratedObject;
	NSString* _childDialogID;

}

@property (assign,nonatomic,__weak) id<FBMobileCanvasDialog> decoratedObject;              //@synthesize decoratedObject=_decoratedObject - In the implementation block
@property (nonatomic,retain) FBMobileCanvasDialogWrapper * opener; 
@property (nonatomic,retain) FBMobileCanvasDialogWrapper * childDialog; 
@property (nonatomic,copy) NSString * childDialogID;                                       //@synthesize childDialogID=_childDialogID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDecoratedObject:(id<FBMobileCanvasDialog>)arg1 ;
-(id<FBMobileCanvasDialog>)decoratedObject;
-(id)openDialogWithURL:(id)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setActionButtonTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)closeDialog:(id)arg1 ;
-(FBMobileCanvasDialogWrapper *)opener;
-(void)setOpener:(FBMobileCanvasDialogWrapper *)arg1 ;
-(FBMobileCanvasDialogWrapper *)childDialog;
-(void)setChildDialog:(FBMobileCanvasDialogWrapper *)arg1 ;
-(NSString *)childDialogID;
-(void)setChildDialogID:(NSString *)arg1 ;
-(id)webView;
-(void)close;
@end


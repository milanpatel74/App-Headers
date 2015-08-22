/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class FBPlatformDebugDataView, NSURL, NSDictionary, NSString;

@interface FBPlatformDebugOpenURLView : UIView <UITextFieldDelegate> {

	FBPlatformDebugDataView* _dataView;
	FBPlatformDebugDataView* _resultView;

}

@property (nonatomic,copy) NSURL * baseURL; 
@property (nonatomic,copy) NSDictionary * bridgeArgs; 
@property (nonatomic,copy) NSDictionary * methodArgs; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (nonatomic,retain) FBPlatformDebugDataView * resultView;              //@synthesize resultView=_resultView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryForDataView:(id)arg1 textViewLabel:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forDataView:(id)arg2 textViewLabel:(id)arg3 ;
-(FBPlatformDebugDataView *)resultView;
-(void)setResultView:(FBPlatformDebugDataView *)arg1 ;
-(void)setBridgeArgs:(NSDictionary *)arg1 ;
-(void)setMethodArgs:(NSDictionary *)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)hideResultViewAnimated:(BOOL)arg1 ;
-(void)showResultViewWithURL:(id)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)bridgeArgs;
-(NSDictionary *)methodArgs;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)dismissKeyboard;
-(NSURL *)baseURL;
-(NSDictionary *)queryParameters;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

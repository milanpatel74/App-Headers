/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingConcurrentRequest.h>
#import <Messenger/FBImageProcessingFaceDetectRequestProtocol.h>

@class NSArray, UIImage, NSString, FBImageProcessingSchedulingContext;

@interface FBImageProcessingFacerFaceDetectRequest : FBImageProcessingConcurrentRequest <FBImageProcessingFaceDetectRequestProtocol> {

	UIImage* _image;
	NSArray* _detectedFaces;

}

@property (nonatomic,copy,readonly) NSArray * detectedFaces;                                      //@synthesize detectedFaces=_detectedFaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long status; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) BOOL canCancelRequestIfNeeded; 
@property (assign,nonatomic) BOOL canExecuteInBackground; 
@property (nonatomic,retain) FBImageProcessingSchedulingContext * schedulingContext; 
-(NSArray *)detectedFaces;
-(id)initWithImage:(id)arg1 completion:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)executeWithContext:(id)arg1 ;
@end

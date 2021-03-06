/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityFeedbackProtocol.h>

@protocol FBRichStoryFeedbackDataModel;
@class FBRichStoryEntityFeedbackTarget, NSString;

@interface FBRichStoryEntityFeedback : NSObject <FBRichStoryEntityFeedbackProtocol> {

	id<FBRichStoryFeedbackDataModel> _feedbackDataModel;
	FBRichStoryEntityFeedbackTarget* _feedbackTarget;
	unsigned long long _style;

}

@property (nonatomic,retain) id<FBRichStoryFeedbackDataModel> feedbackDataModel;              //@synthesize feedbackDataModel=_feedbackDataModel - In the implementation block
@property (nonatomic,retain) FBRichStoryEntityFeedbackTarget * feedbackTarget;                //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                        //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackTarget:(FBRichStoryEntityFeedbackTarget *)arg1 ;
-(FBRichStoryEntityFeedbackTarget *)feedbackTarget;
-(id)initWithFeedbackTarget:(id)arg1 feedbackDataModel:(id)arg2 style:(unsigned long long)arg3 ;
-(id<FBRichStoryFeedbackDataModel>)feedbackDataModel;
-(void)setFeedbackDataModel:(id<FBRichStoryFeedbackDataModel>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end


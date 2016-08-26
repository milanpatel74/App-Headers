/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSDictionary, SKPFeedbackData, NSString, NSArray;

@interface SKPFeedbackNavigationViewController : UITableViewController {

	BOOL _isRootLevel;
	NSDictionary* _feedbackDefinition;
	SKPFeedbackData* _feedback;
	NSString* _area;

}

@property (nonatomic,retain) NSDictionary * feedbackDefinition;              //@synthesize feedbackDefinition=_feedbackDefinition - In the implementation block
@property (nonatomic,readonly) NSArray * areas; 
@property (nonatomic,readonly) SKPFeedbackData * feedback;                   //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) NSString * area;                                //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) BOOL isRootLevel;                             //@synthesize isRootLevel=_isRootLevel - In the implementation block
-(id)initWithFeedback:(id)arg1 areaWithTitle:(id)arg2 ;
-(NSDictionary *)feedbackDefinition;
-(BOOL)isRootLevel;
-(id)initWithFeedbackDefinition:(id)arg1 feedbackData:(id)arg2 area:(id)arg3 isRootLevel:(BOOL)arg4 ;
-(void)setFeedbackDefinition:(NSDictionary *)arg1 ;
-(NSArray *)areas;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)area;
-(void)setArea:(NSString *)arg1 ;
-(SKPFeedbackData *)feedback;
-(id)initWithFeedback:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
@end

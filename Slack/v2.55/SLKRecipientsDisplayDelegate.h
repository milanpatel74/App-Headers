/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLKRecipientsDisplayDelegate <NSObject,SLKRecipientsBarDelegate>
@optional
-(void)recipientsDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didRemoveRecipient:(id)arg2;
-(id)recipientsDisplayController:(id)arg1 willAddRecipient:(id)arg2;
-(void)recipientsDisplayController:(id)arg1 didAddRecipient:(id)arg2;
-(BOOL)recipientsDisplayControllerShouldBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerWillBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerDidBeginSearch:(id)arg1;
-(void)recipientsDisplayControllerWillEndSearch:(id)arg1;
-(void)recipientsDisplayControllerDidEndSearch:(id)arg1;
-(BOOL)recipientsDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKTextViewController.h>
#import <Slack/NSFetchedResultsControllerDelegate.h>
#import <Slack/SLKMessageViewDelegate.h>
#import <Slack/DZNEmptyDataSetSource.h>
#import <Slack/DZNEmptyDataSetDelegate.h>

@protocol SLKFileCommentsViewControllerDelegate;
@class SLKFile, NSString, SLKComment, NSFetchedResultsController, SLKReactionsView, UITextField, SLKDependencies;

@interface SLKFileCommentsViewController : SLKTextViewController <NSFetchedResultsControllerDelegate, SLKMessageViewDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate> {

	BOOL _loading;
	BOOL _loaded;
	id<SLKFileCommentsViewControllerDelegate> _delegate;
	SLKFile* _file;
	NSString* _initialFileId;
	SLKComment* _editingComment;
	NSString* _editingCommentId;
	NSFetchedResultsController* _fetchedResultsController;
	SLKReactionsView* _reactionsView;
	UITextField* _dummyTextField;
	SLKDependencies* _dependencies;

}

@property (assign,getter=isLoading,nonatomic) BOOL loading;                                          //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                            //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) SLKFile * file;                                                         //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSString * initialFileId;                                               //@synthesize initialFileId=_initialFileId - In the implementation block
@property (nonatomic,retain) SLKComment * editingComment;                                            //@synthesize editingComment=_editingComment - In the implementation block
@property (nonatomic,retain) NSString * editingCommentId;                                            //@synthesize editingCommentId=_editingCommentId - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * fetchedResultsController;                  //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) SLKReactionsView * reactionsView;                                       //@synthesize reactionsView=_reactionsView - In the implementation block
@property (nonatomic,retain) UITextField * dummyTextField;                                           //@synthesize dummyTextField=_dummyTextField - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                  //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic,__weak) id<SLKFileCommentsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureView;
-(unsigned long long)textInputStyle;
-(NSFetchedResultsController *)fetchedResultsController;
-(BOOL)ignoreTextInputbarAdjustment;
-(void)textWillUpdate;
-(void)textDidUpdate:(BOOL)arg1 ;
-(void)didPressRightButton:(id)arg1 ;
-(void)editText:(id)arg1 ;
-(void)didCommitTextEditing:(id)arg1 ;
-(void)didCancelTextEditing:(id)arg1 ;
-(void)messageView:(id)arg1 didTapLink:(id)arg2 ;
-(id)descriptionForEmptyDataSet:(id)arg1 ;
-(id)imageForEmptyDataSet:(id)arg1 ;
-(void)didChangeAutoCompletionPrefix:(id)arg1 andWord:(id)arg2 ;
-(double)heightForAutoCompletionView;
-(id)keyForTextCaching;
-(void)willRequestUndo;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setReactionsView:(SLKReactionsView *)arg1 ;
-(SLKReactionsView *)reactionsView;
-(BOOL)emptyDataSetShouldAllowScroll:(id)arg1 ;
-(void)dynamicTypeFontChanged:(id)arg1 ;
-(id)initWithFileId:(id)arg1 dependencies:(id)arg2 ;
-(id)initWithFile:(id)arg1 dependencies:(id)arg2 ;
-(void)registerCustomNotifications;
-(BOOL)textView:(id)arg1 shouldOfferFormattingForSymbol:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInsertSuffixForFormattingWithSymbol:(id)arg2 prefixRange:(NSRange)arg3 ;
-(void)promptToDeleteMessage:(id)arg1 fromLocation:(CGPoint)arg2 ;
-(void)webSocketConnectionStatusChanged;
-(void)didChangeKeyboardStatus:(unsigned long long)arg1 ;
-(BOOL)forceTextInputbarAdjustmentForResponder:(id)arg1 ;
-(void)dismissAlertControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)loadFileComments;
-(NSString *)initialFileId;
-(BOOL)canPressRightButton;
-(void)setDummyTextField:(UITextField *)arg1 ;
-(UITextField *)dummyTextField;
-(void)setMaxLineHeight;
-(void)heldCell:(id)arg1 ;
-(void)configureMessageCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)commentAtIndexPath:(id)arg1 ;
-(double)heightForMessageCell:(id)arg1 ;
-(void)copyComment:(id)arg1 ;
-(void)addReactionForComment:(id)arg1 ;
-(void)editComment:(id)arg1 ;
-(NSString *)editingCommentId;
-(id)commentForId:(id)arg1 ;
-(void)setEditingCommentId:(NSString *)arg1 ;
-(BOOL)canScrollToComments;
-(id)indexPathOfComment:(id)arg1 ;
-(void)commentAdded:(id)arg1 ;
-(id)lastCommentIndexPath;
-(void)sendComment:(id)arg1 ;
-(SLKComment *)editingComment;
-(void)editLastComment:(id)arg1 ;
-(id)mostRecentCommentFromUser:(id)arg1 ;
-(void)addReactionForFile;
-(void)setInitialFileId:(NSString *)arg1 ;
-(void)setEditingComment:(SLKComment *)arg1 ;
-(SLKDependencies *)dependencies;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setDelegate:(id<SLKFileCommentsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SLKFileCommentsViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)keyCommands;
-(void)setText:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)isLoading;
-(void)commonInit;
-(BOOL)isLoaded;
-(BOOL)isReachable;
-(void)setLoading:(BOOL)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
@end

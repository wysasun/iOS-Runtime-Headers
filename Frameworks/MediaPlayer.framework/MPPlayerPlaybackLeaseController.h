/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayerPlaybackLeaseController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _hasDoneInitialSetup;
    BOOL  _isAutomaticLeaseRefreshEnabled;
    BOOL  _isObservingSubscriptionNotifications;
    BOOL  _isPlayerEffectivelyPlaying;
    BOOL  _isStartingLeaseForPlaybackResumption;
    NSMutableArray * _players;
    unsigned int  _preventionState;
    BOOL  _shouldStartLeaseForAssets;
    BOOL  _shouldStartLeaseForUserAction;
    NSMutableArray * _startLeaseForPlaybackResumptionCompletionHandlers;
    BOOL  _usesSubscriptionLease;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_acquireSubscriptionLeaseForCurrentItemIfNeededWithPlayer:(id)arg1;
- (BOOL)_calculateEffectivelyPlayingForPlayer:(id)arg1;
- (BOOL)_pausePlayerForLeaseEnd:(id)arg1;
- (void)_pausePlayersForLeaseEndWithNotification:(BOOL)arg1;
- (void)_playerItemReadyToPlayNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (BOOL)_shouldPausePlaybackReturningWasLeaseTaken:(BOOL*)arg1;
- (void)_shouldPlaybackRequireSubscriptionLeaseDidChangeNotification:(id)arg1;
- (void)_startLeaseIfNeededForCurrentPlayerItemsFromUserAction:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg1;
- (void)_subscriptionLeaseDidBeginNotification:(id)arg1;
- (void)_subscriptionLeaseDidEndNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updatePlayerEffectivelyPlaying;
- (void)_updateUsesSubscriptionLease;
- (void)acquireShouldStartLeaseForAssetCreationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)getFinalSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)handleLeaseForErrorResolutionWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)registerPlayer:(id)arg1;
- (void)startLeaseIfNeededForPlaybackResumptionWithCompletionHandler:(id /* block */)arg1;

@end

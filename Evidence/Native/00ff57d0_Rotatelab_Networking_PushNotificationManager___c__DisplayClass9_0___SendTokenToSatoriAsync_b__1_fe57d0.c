/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<>c__DisplayClass9_0$$<SendTokenToSatoriAsync>b__1
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_PushNotificationManager___c__DisplayClass9_0___SendTokenToSatoriAsync_b__1 (Rotatelab_Networking_PushNotificationManager___c__DisplayClass9_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.PushNotificationManager.<>c__DisplayClass9_0$$<SendTokenToSatoriAsync>b__1
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_PushNotificationManager___c__DisplayClass9_0___SendTokenToSatoriAsync_b__1
   (Rotatelab_Networking_PushNotificationManager___c__DisplayClass9_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_Networking_PushNotificationManager___c__DisplayClass9_0___SendTokenToSatoriAsync_b__1_fe57d0
               (undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_00ff590c + 0xff57ec);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5910 + 0xff5800));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5914 + 0xff580c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5918 + 0xff5818));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff591c + 0xff5824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5920 + 0xff5830));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff5924 + 0xff5844));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0x24);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff5928 + 0xff5864));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (iVar1,**(undefined4 **)(_UNK_00ff592c + 0xff587c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_object__object___Add_206933c
            (iVar1,**(undefined4 **)(_UNK_00ff5934 + 0xff58b0),*(undefined4 *)(param_2 + 8),
             **(undefined4 **)(_UNK_00ff5930 + 0xff58a4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Hiro_SatoriSystem__UpdatePropertiesAsync_296c690(iVar4,iVar1,0,1,0,0);
  Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask_321dc9c(&uStack_20,uVar2,1,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}


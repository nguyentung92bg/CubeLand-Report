/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Enqueue
void Rotatelab_Ads_MainThreadDispatcher__Enqueue (System_Action_o* action, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010ff118) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$Enqueue
   void Rotatelab_Ads_MainThreadDispatcher__Enqueue (System_Action_o* action, const MethodInfo*
   method); */

void Rotatelab_Ads_MainThreadDispatcher__Enqueue_10ef008(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char cStack_1d;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010ff15c + 0x10ff020);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff160 + 0x10ff034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff164 + 0x10ff040));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  cStack_1d = '\0';
  if (param_1 != 0) {
    piVar3 = *(int **)(_UNK_010ff168 + 0x10ff068);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    cStack_1d = '\0';
    uStack_1c = **(undefined4 **)(iVar1 + 0x5c);
    System_Threading_Monitor__Enter_2bdfb90(uStack_1c,&cStack_1d,0);
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar3;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70
              (**(int **)(iVar1 + 0x5c),param_1,**(undefined4 **)(_UNK_010ff16c + 0x10ff0e8));
    if (cStack_1d != '\0') {
      System_Threading_Monitor__Exit_2be3444(uStack_1c,0);
    }
  }
  return;
}


/* IL2CPP: Rotatelab.ObservableEnergy$$add_OnInfinityTimerChanged
void Rotatelab_ObservableEnergy__add_OnInfinityTimerChanged (Rotatelab_ObservableEnergy_o* __this, System_Action_long__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableEnergy$$add_OnInfinityTimerChanged
   void Rotatelab_ObservableEnergy__add_OnInfinityTimerChanged (Rotatelab_ObservableEnergy_o*
   __this, System_Action_long__o* value, const MethodInfo* method); */

void Rotatelab_ObservableEnergy__add_OnInfinityTimerChanged_fb3928(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_00fc39cc + 0xfc3940);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc39d0 + 0xfc3954));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_00fc39d4 + 0xfc396c);
  iVar1 = *(int *)(param_1 + 0x60);
  do {
    iVar5 = 0;
    iVar2 = System_Delegate__Combine_2bbca94(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = thunk_FUN_00f00bc8(iVar2,uVar4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar4);
      }
    }
    iVar2 = FUN_00efd180((int *)(param_1 + 0x60),iVar5,iVar1);
    bVar7 = iVar2 != iVar1;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}


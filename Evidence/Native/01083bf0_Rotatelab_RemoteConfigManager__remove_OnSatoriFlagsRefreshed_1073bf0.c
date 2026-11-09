/* IL2CPP: Rotatelab.RemoteConfigManager$$remove_OnSatoriFlagsRefreshed
void Rotatelab_RemoteConfigManager__remove_OnSatoriFlagsRefreshed (Rotatelab_RemoteConfigManager_o* __this, System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$remove_OnSatoriFlagsRefreshed
   void Rotatelab_RemoteConfigManager__remove_OnSatoriFlagsRefreshed
   (Rotatelab_RemoteConfigManager_o* __this, System_Action_o* value, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__remove_OnSatoriFlagsRefreshed_1073bf0
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  pcVar4 = (char *)(_UNK_01083c84 + 0x1083c08);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01083c88 + 0x1083c1c));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01083c8c + 0x1083c34);
  iVar1 = *(int *)(param_1 + 0x98);
  while( true ) {
    piVar2 = (int *)System_Delegate__Remove_2bbcc8c(iVar1,param_2,0);
    piVar5 = (int *)0x0;
    if ((piVar2 != (int *)0x0) && (piVar5 = piVar2, *piVar2 != *piVar6)) break;
    iVar3 = FUN_00efd180((int *)(param_1 + 0x98),piVar5,iVar1);
    bVar7 = iVar3 == iVar1;
    iVar1 = iVar3;
    if (bVar7) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28();
}


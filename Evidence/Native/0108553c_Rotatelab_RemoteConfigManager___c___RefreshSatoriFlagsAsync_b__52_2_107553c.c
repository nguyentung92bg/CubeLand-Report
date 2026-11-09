/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$<RefreshSatoriFlagsAsync>b__52_2
System_String_o* Rotatelab_RemoteConfigManager___c___RefreshSatoriFlagsAsync_b__52_2 (Rotatelab_RemoteConfigManager___c_o* __this, Satori_IApiFlag_o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager.<>c$$<RefreshSatoriFlagsAsync>b__52_2
   System_String_o* Rotatelab_RemoteConfigManager___c___RefreshSatoriFlagsAsync_b__52_2
   (Rotatelab_RemoteConfigManager___c_o* __this, Satori_IApiFlag_o* f, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager___c___RefreshSatoriFlagsAsync_b__52_2_107553c
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010855e4 + 0x1085550);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010855e8 + 0x1085564));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010855ec + 0x1085588)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_010855d0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_010855ec + 0x1085588),1);
LAB_010855d0:
                    /* WARNING: Could not recover jumptable at 0x010855e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}


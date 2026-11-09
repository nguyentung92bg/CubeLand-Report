/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<BreakConnection>b__120_1
bool Rotatelab_Scripts_BlasterController___c___BreakConnection_b__120_1 (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_ConnectionController_o* connection, Rotatelab_Scripts_BlasterController_o* to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<BreakConnection>b__120_1
   bool Rotatelab_Scripts_BlasterController___c___BreakConnection_b__120_1
   (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_ConnectionController_o*
   connection, Rotatelab_Scripts_BlasterController_o* to, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___c___BreakConnection_b__120_1_10393f8
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0104946c + 0x1049410);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01049470 + 0x1049424));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  if (*(int *)(**(int **)(_UNK_01049474 + 0x1049444) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__op_Equality_36033f4(uVar1,param_3,0);
  return;
}


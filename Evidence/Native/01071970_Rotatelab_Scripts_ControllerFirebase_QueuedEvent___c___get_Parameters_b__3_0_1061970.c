/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent.<>c$$<get_Parameters>b__3_0
Firebase_Analytics_Parameter_o* Rotatelab_Scripts_ControllerFirebase_QueuedEvent___c___get_Parameters_b__3_0 (Rotatelab_Scripts_ControllerFirebase_QueuedEvent___c_o* __this, Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEvent.<>c$$<get_Parameters>b__3_0
   Firebase_Analytics_Parameter_o*
   Rotatelab_Scripts_ControllerFirebase_QueuedEvent___c___get_Parameters_b__3_0
   (Rotatelab_Scripts_ControllerFirebase_QueuedEvent___c_o* __this,
   Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter_o* e, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_ControllerFirebase_QueuedEvent___c___get_Parameters_b__3_0_1061970
          (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_01071b78 + 0x10719a8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071b7c + 0x10719bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071b80 + 0x10719c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071b84 + 0x10719d4));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  iVar2 = *(int *)(**(int **)(_UNK_01071b88 + 0x10719e8) + 0x74);
  if (*(int *)(param_2 + 0x10) == 2) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    if (*(int *)(**(int **)(_UNK_01071b94 + 0x1071aac) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = System_Convert__ToDouble_2b1f4ec(uVar5,uVar1,0);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01071b98 + 0x1071ae0));
    Firebase_Analytics_Parameter___ctor_11dec2c
              (uVar5,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  }
  else if (*(int *)(param_2 + 0x10) == 1) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    if (*(int *)(**(int **)(_UNK_01071b8c + 0x1071a30) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = System_Convert__ToInt64_2b1e5e4(uVar5,uVar1,0);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01071b90 + 0x1071a64));
    Firebase_Analytics_Parameter___ctor_11debc4
              (uVar5,uVar4,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0);
  }
  else {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    if (*(int *)(**(int **)(_UNK_01071b9c + 0x1071b24) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = System_Convert__ToString_2b20424(uVar5,uVar1,0);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01071ba0 + 0x1071b54));
    Firebase_Analytics_Parameter___ctor_11deb88(uVar5,uVar4,uVar1,0);
  }
  return uVar5;
}


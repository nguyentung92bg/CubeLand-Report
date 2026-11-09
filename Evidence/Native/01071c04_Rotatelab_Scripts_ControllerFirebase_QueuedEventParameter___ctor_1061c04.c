/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEventParameter$$.ctor
void Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter___ctor (Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter_o* __this, Firebase_Analytics_Parameter_o* parameter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.QueuedEventParameter$$.ctor
   void Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter___ctor
   (Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter_o* __this,
   Firebase_Analytics_Parameter_o* parameter, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase_QueuedEventParameter___ctor_1061c04
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_01071da0 + 0x1071c1c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071da4 + 0x1071c30));
    *pcVar6 = '\x01';
  }
  System_Object___ctor_2bb93bc(param_1,0);
  piVar7 = *(int **)(_UNK_01071da8 + 0x1071c50);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  *(undefined4 *)(param_1 + 8) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = *(int *)(*(int *)(*piVar7 + 0x5c) + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  puVar5 = (undefined4 *)(param_1 + 0xc);
  *puVar5 = uVar2;
  thunk_FUN_00ec5080(puVar5,uVar2);
  piVar7 = (int *)*puVar5;
  if (piVar7 != (int *)0x0) {
    iVar1 = *(int *)(_UNK_01071dac + 0x1071cf4);
    iVar4 = *piVar7;
    if (iVar4 == *(int *)(iVar1 + 0x48)) {
      uVar2 = 0;
    }
    else if (iVar4 == *(int *)(iVar1 + 0x34)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
      if (iVar4 != *(int *)(iVar1 + 0x40)) goto LAB_01071d1c;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    return;
  }
LAB_01071d1c:
  FUN_00b87610(piVar7);
  uVar2 = System_Object__GetType_2bb9c9c(piVar7,0);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01071db0 + 0x1071d40));
  uVar2 = System_String__Format_29ffb6c(uVar3,uVar2,0);
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01071db4 + 0x1071d5c));
  uVar3 = thunk_FUN_00f00cdc();
  System_ArgumentException___ctor_2b113a4(uVar3,uVar2,0);
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01071db8 + 0x1071d7c));
  func_0x00ec3920(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}


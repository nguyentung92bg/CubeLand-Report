/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_0>d$$SetStateMachine
void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__SetStateMachine (Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController.<<CreateSystems>b__60_0>d$$SetStateMachine
   void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__SetStateMachine
   (Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d_o __this,
   System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___CreateSystems_b__60_0_d__SetStateMachine_114de54
               (int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0115decc + 0x115de6c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ded0 + 0x115de80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115ded4 + 0x115de8c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0115ded8 + 0x115dea0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar3 = (int *)(param_1 + 4);
  if (param_2 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c4c + 0x2aa3bbc),0,0);
    uVar5 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c50 + 0x2aa3bd0));
    System_ArgumentNullException___ctor_2b08d00(uVar5,uVar4,0);
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c54 + 0x2aa3bec));
  }
  else {
    if (*piVar3 == 0) {
      *piVar3 = param_2;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar3 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c58 + 0x2aa3c04));
    uVar4 = System_Environment__GetResourceString_2bb93b4(uVar4,0);
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c5c + 0x2aa3c1c));
    uVar5 = thunk_FUN_00f00cdc();
    System_InvalidOperationException___ctor_2b6e948(uVar5,uVar4,0);
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02aa3c60 + 0x2aa3c3c));
  }
  func_0x00ec3920(uVar5,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}


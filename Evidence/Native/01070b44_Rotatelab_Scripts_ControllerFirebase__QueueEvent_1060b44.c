/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$QueueEvent
void Rotatelab_Scripts_ControllerFirebase__QueueEvent (System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01070cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$QueueEvent
   void Rotatelab_Scripts_ControllerFirebase__QueueEvent (System_String_o* eventName,
   Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__QueueEvent_1060b44(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char cStack_15;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01070dc8 + 0x1070b60);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070dcc + 0x1070b74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070dd0 + 0x1070b80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070dd4 + 0x1070b8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070dd8 + 0x1070b98));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  cStack_15 = '\0';
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01070ddc + 0x1070bb0));
  Rotatelab_Scripts_ControllerFirebase_QueuedEvent___ctor_1061274(uVar1,param_1,param_2);
  if (*(int *)(**(int **)(_UNK_01070de0 + 0x1070bdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Newtonsoft_Json_JsonConvert__SerializeObject_2c33b34(uVar1,0);
  uVar1 = System_String__Concat_29fee38(uVar1,**(undefined4 **)(_UNK_01070de4 + 0x1070c04),0);
  piVar4 = *(int **)(_UNK_01070de8 + 0x1070c1c);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  cStack_15 = '\0';
  uStack_14 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
  System_Threading_Monitor__Enter_2bdfb90(uStack_14,&cStack_15,0);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  System_IO_File__AppendAllText_2b2f4e0(*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8),uVar1,0);
  if (cStack_15 != '\0') {
    System_Threading_Monitor__Exit_2be3444(uStack_14,0);
  }
  return;
}


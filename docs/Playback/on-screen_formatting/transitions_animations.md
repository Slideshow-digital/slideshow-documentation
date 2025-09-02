# Transitions & animations

## Transitions

Slideshow allows you to set up various transitions (or animations) between two consecutively displayed images or PDFs in one zone.

Transitions can be set up via web interface → menu `Screen layout` → `Edit screen layout`, after double-clicking a particular zone. You can choose different transition types and lengths for each zone. We suggest using length between 300 and 2000 milliseconds for the best effect. After saving the transition settings, refresh the screen layout to apply changes immediately.

### Available transition types

- **No animation** – there will be no animation between two images, they will change immediately
- **Fade out** – dissolve the previous image
- **Crossfade** – smooth transition / dissolve between images, background may be partially visible
- **To right** – old image moves to the right
- **To left** – old image moves to the left
- **To top** – old image moves to the top
- **To bottom** – old image moves to the bottom
- **Shrink** – old image shrinks to the center
- **Rotate & shrink** – old image shrinks to the center while rotating
- **Enlarge & crossfade** – old image enlarges and fades out
- **Explode** – old image explodes into 3×3 parts
- **Fold** – old image folds to the left border
- **Horizontal flip** – the images flips horizontally (along Y axis)
- **Vertical flip** – the images flips vertically (along X axis)
- **Hide** – old image will be hidden and new images will be displayed after the animation length, displaying only the background in the meantime
- **Inside cube (from right)** – simulates a 3D cube from inside, transition is always from right
- **Inside cube (random direction)** – simulates a 3D cube from inside, transition is from random direction (right, left, top or bottom)
- **Outside cube (from right)** – simulates a 3D cube from outside, transition is always from right
- **Outside cube (random direction)** – simulates a 3D cube from outside, transition is from random direction (right, left, top or bottom)
- **Random** – picks random animation each time from all available except No animation and Hide

Transition of large screen areas requires significant CPU power to render smoothly, so it may lag on slower devices.

## Examples of some of the available transitions

<video controls>
<source src="../transition_fade_out.mp4" type="video/mp4">
</video>
/// caption
Fade out transition
///

<video controls>
<source src="../transition_enlarge_crossfade.mp4" type="video/mp4">
</video>
/// caption
Enlarge & crossfade transition
///

<video controls>
<source src="../transition_to_left.mp4" type="video/mp4">
</video>
/// caption
To left transition
///

<video controls>
<source src="../transition_rotate_shrink.mp4" type="video/mp4">
</video>
/// caption
Rotate & shrink transition
///

<video controls>
<source src="../transition_inside_cube.mp4" type="video/mp4">
</video>
/// caption
Inside cube transition
///

<video controls>
<source src="../transition_outside_cube.mp4" type="video/mp4">
</video>
/// caption
Outside cube transition
///

## Animations

Images and PDFs displayed on the screen can be animated, for example slowly zooming in or out, or slowly moving to the side. Animations can be set up through the web interface → menu `Content` → `Edit` → Image animation types & speed. If multiple animation types are selected, a random one will be used for each image.

Sample screen layout `With animation and time` (menu `Screen layout` → button `Sample screen layouts`) can be used as a starting point for setting up animations. Not all combinations of transitions and animations are working smoothly on all devices. We suggest testing your combination before using it live.

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/tRrzSgNBQb4?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>
